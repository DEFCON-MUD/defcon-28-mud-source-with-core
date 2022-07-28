inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 8 }));
  set_short( "Hallway - x49y52z8" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y52z8.c",
  "south" : DIR+"/rooms/x49y51z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
