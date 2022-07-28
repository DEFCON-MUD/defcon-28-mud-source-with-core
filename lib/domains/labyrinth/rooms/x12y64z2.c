inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 64, 2 }));
  set_short( "Hallway - x12y64z2" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y64z2.c",
  "east" : DIR+"/rooms/x13y64z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
