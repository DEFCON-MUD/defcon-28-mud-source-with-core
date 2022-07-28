inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 30, 2 }));
  set_short( "Corridor - x9y30z2" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y31z2.c",
  "south" : DIR+"/rooms/x9y29z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
