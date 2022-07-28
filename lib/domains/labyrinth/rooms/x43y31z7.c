inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 31, 7 }));
  set_short( "Hallway - x43y31z7" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y32z7.c",
  "south" : DIR+"/rooms/x43y30z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
