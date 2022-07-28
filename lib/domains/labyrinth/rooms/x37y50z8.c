inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 50, 8 }));
  set_short( "Passage - x37y50z8" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y50z8.c",
  "south" : DIR+"/rooms/x37y49z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
