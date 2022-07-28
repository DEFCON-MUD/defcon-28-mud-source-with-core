inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 26, 8 }));
  set_short( "Corridor - x57y26z8" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y26z8.c",
  "east" : DIR+"/rooms/x58y26z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
