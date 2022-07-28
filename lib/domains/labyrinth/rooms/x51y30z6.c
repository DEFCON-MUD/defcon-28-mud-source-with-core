inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 30, 6 }));
  set_short( "Hallway - x51y30z6" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y30z6.c",
  "north" : DIR+"/rooms/x51y31z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
