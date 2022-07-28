inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 56, 2 }));
  set_short( "Passage - x42y56z2" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y56z2.c",
  "east" : DIR+"/rooms/x43y56z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
