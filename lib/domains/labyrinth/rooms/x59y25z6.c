inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 25, 6 }));
  set_short( "Corridor - x59y25z6" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y26z6.c",
  "south" : DIR+"/rooms/x59y24z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
