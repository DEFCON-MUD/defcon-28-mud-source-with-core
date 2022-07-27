inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 47, 9 }));
  set_short( "Hallway - x31y47z9" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y48z9.c",
  "south" : DIR+"/rooms/x31y46z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
