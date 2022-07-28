inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 56, 6 }));
  set_short( "Passage - x17y56z6" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y56z6.c",
  "east" : DIR+"/rooms/x18y56z6.c",
  "south" : DIR+"/rooms/x17y55z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
