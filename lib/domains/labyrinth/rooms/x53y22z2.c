inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 2 }));
  set_short( "Hallway - x53y22z2" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y22z2.c",
  "south" : DIR+"/rooms/x53y21z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
