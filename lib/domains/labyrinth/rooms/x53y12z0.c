inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 12, 0 }));
  set_short( "Hallway - x53y12z0" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y13z0.c",
  "south" : DIR+"/rooms/x53y11z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
