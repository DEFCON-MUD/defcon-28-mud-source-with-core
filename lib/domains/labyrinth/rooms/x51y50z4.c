inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 50, 4 }));
  set_short( "Hallway - x51y50z4" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y50z4.c",
  "north" : DIR+"/rooms/x51y51z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
