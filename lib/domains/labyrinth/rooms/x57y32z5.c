inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 32, 5 }));
  set_short( "Hallway - x57y32z5" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y32z5.c",
  "north" : DIR+"/rooms/x57y33z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
