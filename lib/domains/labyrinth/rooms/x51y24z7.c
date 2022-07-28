inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 7 }));
  set_short( "Passage - x51y24z7" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y24z7.c",
  "east" : DIR+"/rooms/x52y24z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
