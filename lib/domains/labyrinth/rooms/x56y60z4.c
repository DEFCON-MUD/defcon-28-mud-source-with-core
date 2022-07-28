inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 60, 4 }));
  set_short( "Hallway - x56y60z4" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y60z4.c",
  "east" : DIR+"/rooms/x57y60z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
