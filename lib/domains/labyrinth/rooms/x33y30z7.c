inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 30, 7 }));
  set_short( "Hallway - x33y30z7" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y30z7.c",
  "east" : DIR+"/rooms/x34y30z7.c",
  "north" : DIR+"/rooms/x33y31z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
