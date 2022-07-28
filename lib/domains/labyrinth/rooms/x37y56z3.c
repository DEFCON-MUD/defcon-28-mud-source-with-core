inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 56, 3 }));
  set_short( "Hallway - x37y56z3" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y56z3.c",
  "south" : DIR+"/rooms/x37y55z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
