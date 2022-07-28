inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 2, 9 }));
  set_short( "Corridor - x16y2z9" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y2z9.c",
  "east" : DIR+"/rooms/x17y2z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
