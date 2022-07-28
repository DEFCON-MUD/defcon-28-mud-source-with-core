inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 50, 4 }));
  set_short( "Hallway - x10y50z4" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y50z4.c",
  "east" : DIR+"/rooms/x11y50z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
