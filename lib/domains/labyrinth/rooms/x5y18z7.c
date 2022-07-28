inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 18, 7 }));
  set_short( "Hallway - x5y18z7" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y18z7.c",
  "east" : DIR+"/rooms/x6y18z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
