inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 9 }));
  set_short( "Hallway - x33y58z9" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y59z9.c",
  "south" : DIR+"/rooms/x33y57z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
