inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 14, 0 }));
  set_short( "Corridor - x39y14z0" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y14z0.c",
  "east" : DIR+"/rooms/x40y14z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
