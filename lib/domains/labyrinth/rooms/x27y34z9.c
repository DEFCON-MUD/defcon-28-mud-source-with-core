inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 9 }));
  set_short( "Hallway - x27y34z9" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y34z9.c",
  "north" : DIR+"/rooms/x27y35z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
