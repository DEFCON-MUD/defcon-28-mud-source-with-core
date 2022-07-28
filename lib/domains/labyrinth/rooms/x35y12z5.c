inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 12, 5 }));
  set_short( "Corridor - x35y12z5" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y12z5.c",
  "east" : DIR+"/rooms/x36y12z5.c",
  "north" : DIR+"/rooms/x35y13z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
