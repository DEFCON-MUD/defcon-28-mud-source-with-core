inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 26, 1 }));
  set_short( "Hallway - x11y26z1" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y26z1.c",
  "east" : DIR+"/rooms/x12y26z1.c",
  "north" : DIR+"/rooms/x11y27z1.c",
  "south" : DIR+"/rooms/x11y25z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
