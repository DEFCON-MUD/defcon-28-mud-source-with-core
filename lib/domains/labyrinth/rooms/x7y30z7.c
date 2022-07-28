inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 30, 7 }));
  set_short( "Corridor - x7y30z7" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y30z7.c",
  "north" : DIR+"/rooms/x7y31z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
