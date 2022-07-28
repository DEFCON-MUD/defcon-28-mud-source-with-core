inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 62, 9 }));
  set_short( "Corridor - x58y62z9" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y62z9.c",
  "east" : DIR+"/rooms/x59y62z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
