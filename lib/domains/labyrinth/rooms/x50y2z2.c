inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 2, 2 }));
  set_short( "Hallway - x50y2z2" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y2z2.c",
  "east" : DIR+"/rooms/x51y2z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
