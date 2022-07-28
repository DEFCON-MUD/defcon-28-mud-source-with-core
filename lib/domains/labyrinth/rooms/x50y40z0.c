inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 40, 0 }));
  set_short( "Passage - x50y40z0" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y40z0.c",
  "east" : DIR+"/rooms/x51y40z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
