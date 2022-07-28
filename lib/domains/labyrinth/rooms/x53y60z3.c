inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 60, 3 }));
  set_short( "Passage - x53y60z3" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y60z3.c",
  "north" : DIR+"/rooms/x53y61z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
