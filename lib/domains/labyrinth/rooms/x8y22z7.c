inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 22, 7 }));
  set_short( "Hallway - x8y22z7" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y22z7.c",
  "east" : DIR+"/rooms/x9y22z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
