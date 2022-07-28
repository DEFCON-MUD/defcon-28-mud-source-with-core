inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 10, 3 }));
  set_short( "Corridor - x59y10z3" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y10z3.c",
  "east" : DIR+"/rooms/x60y10z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
