inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 62, 5 }));
  set_short( "Passage - x13y62z5" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y62z5.c",
  "east" : DIR+"/rooms/x14y62z5.c",
  "north" : DIR+"/rooms/x13y63z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
