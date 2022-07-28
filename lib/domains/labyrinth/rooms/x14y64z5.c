inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 64, 5 }));
  set_short( "Hallway - x14y64z5" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y64z5.c",
  "east" : DIR+"/rooms/x15y64z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
