inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 8, 7 }));
  set_short( "Corridor - x54y8z7" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y8z7.c",
  "east" : DIR+"/rooms/x55y8z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
