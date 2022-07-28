inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 6 }));
  set_short( "Hallway - x15y42z6" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y42z6.c",
  "south" : DIR+"/rooms/x15y41z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
