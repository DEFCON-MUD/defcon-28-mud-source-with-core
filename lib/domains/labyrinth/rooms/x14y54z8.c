inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 54, 8 }));
  set_short( "Corridor - x14y54z8" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y54z8.c",
  "east" : DIR+"/rooms/x15y54z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
