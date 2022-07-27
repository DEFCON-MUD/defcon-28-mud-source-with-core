inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 25, 9 }));
  set_short( "Hallway - x53y25z9" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y26z9.c",
  "south" : DIR+"/rooms/x53y24z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
