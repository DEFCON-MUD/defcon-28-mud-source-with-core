inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 52, 7 }));
  set_short( "Corridor - x39y52z7" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y52z7.c",
  "south" : DIR+"/rooms/x39y51z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
