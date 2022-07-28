inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 10, 9 }));
  set_short( "Corridor - x6y10z9" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y10z9.c",
  "east" : DIR+"/rooms/x7y10z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
