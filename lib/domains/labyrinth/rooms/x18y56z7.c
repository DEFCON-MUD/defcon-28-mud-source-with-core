inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 56, 7 }));
  set_short( "Hallway - x18y56z7" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y56z7.c",
  "east" : DIR+"/rooms/x19y56z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
