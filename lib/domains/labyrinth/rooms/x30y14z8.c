inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 14, 8 }));
  set_short( "Hallway - x30y14z8" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y14z8.c",
  "east" : DIR+"/rooms/x31y14z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
