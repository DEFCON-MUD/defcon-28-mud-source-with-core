inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 64, 5 }));
  set_short( "Hallway - x16y64z5" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y64z5.c",
  "east" : DIR+"/rooms/x17y64z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
