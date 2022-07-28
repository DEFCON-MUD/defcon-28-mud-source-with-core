inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 36, 9 }));
  set_short( "Passage - x54y36z9" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y36z9.c",
  "east" : DIR+"/rooms/x55y36z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
