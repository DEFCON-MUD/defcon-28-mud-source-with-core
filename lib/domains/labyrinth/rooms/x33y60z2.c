inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 60, 2 }));
  set_short( "Hallway - x33y60z2" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y60z2.c",
  "south" : DIR+"/rooms/x33y59z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
