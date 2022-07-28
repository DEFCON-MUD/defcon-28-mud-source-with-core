inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 58, 8 }));
  set_short( "Corridor - x29y58z8" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y58z8.c",
  "east" : DIR+"/rooms/x30y58z8.c",
  "south" : DIR+"/rooms/x29y57z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
