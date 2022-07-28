inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 18, 7 }));
  set_short( "Passage - x15y18z7" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y18z7.c",
  "east" : DIR+"/rooms/x16y18z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
