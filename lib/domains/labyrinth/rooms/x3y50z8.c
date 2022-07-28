inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 50, 8 }));
  set_short( "Corridor - x3y50z8" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y50z8.c",
  "north" : DIR+"/rooms/x3y51z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
