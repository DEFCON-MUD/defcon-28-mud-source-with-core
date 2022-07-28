inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 16, 3 }));
  set_short( "Corridor - x24y16z3" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y16z3.c",
  "east" : DIR+"/rooms/x25y16z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
