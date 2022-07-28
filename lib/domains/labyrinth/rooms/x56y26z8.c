inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 26, 8 }));
  set_short( "Hallway - x56y26z8" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y26z8.c",
  "east" : DIR+"/rooms/x57y26z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
