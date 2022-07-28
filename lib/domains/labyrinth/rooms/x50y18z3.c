inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 18, 3 }));
  set_short( "Hallway - x50y18z3" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y18z3.c",
  "east" : DIR+"/rooms/x51y18z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
