inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 64, 9 }));
  set_short( "Corridor - x31y64z9" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y64z9.c",
  "east" : DIR+"/rooms/x32y64z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
