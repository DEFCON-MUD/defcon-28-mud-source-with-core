inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 48, 9 }));
  set_short( "Corridor - x1y48z9" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y48z9.c",
  "north" : DIR+"/rooms/x1y49z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
